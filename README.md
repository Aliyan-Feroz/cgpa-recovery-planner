# CGPA Recovery & Academic Planner 🎓

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://en.cpp.org/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20macOS%20%7C%20Linux-lightgrey.svg)](#)

An interactive, high-utility command-line application designed to help university students strategize their academic recovery. By analyzing current progress and degree requirements, this tool calculates the exact target GPA needed in remaining credit hours to achieve a desired graduation CGPA, providing tailored academic recommendations based on the results.

---

## 🚀 Key Features

* **📊 Precision Target Analysis:** Calculates the exact average GPA required over your remaining credit hours to hit your target.
* **⚠️ Mathematical Feasibility Guard:** Instantly detects if a target is mathematically impossible and automatically calculates your **highest possible final CGPA** assuming perfect grades.
* **💡 Dynamic, Tiered Recommendations:** Offers smart, actionable advice tailored to your required GPA trajectory (ranging from "Comfortably Achievable" to "Highly Ambitious").
* **🧹 Polished CLI UX:** Features structured visual tables, clean dividers, and automatic screen clearing for a seamless user experience.

---

## 🧮 Theoretical Background & Logic

The core logic of the planner relies on weighted quality points. To find your required trajectory, the system evaluates:

$$\text{Remaining Credits} = \text{Total Credits} - \text{Completed Credits}$$

$$\text{Required GPA} = \frac{(\text{Target CGPA} \times \text{Total Credits}) - (\text{Current CGPA} \times \text{Completed Credits})}{\text{Remaining Credits}}$$

If the calculated required GPA exceeds $4.00$, the target is flagged as unreachable, and the maximum achievable CGPA is solved using:

$$\text{Max Possible CGPA} = \frac{(4.00 \times \text{Remaining Credits}) + (\text{Current CGPA} \times \text{Completed Credits})}{\text{Total Credits}}$$

---

## 🛠️ Technical Details (C++ Implementation)

* **Header Set:** Uses `<iomanip>` to enforce strict double-precision styling, formatting the analysis output perfectly to `2` decimal places.
* **Layout Formatting:** Employs `std::left` and `std::setw` manipulators for perfectly aligned, table-like terminal outputs regardless of variable string lengths.
* **Data Validation:** Features conditional branching to gracefully handle completed degrees, unrealistic goals, and already surpassed targets.

---

## 💻 Getting Started

### Prerequisites
You need a C++ compiler supporting C++11 or higher installed on your machine (such as `g++` via GCC, Clang, or MSVC).

### Installation & Run

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/Aliyan-Feroz/cgpa-recovery-planner.git](https://github.com/Aliyan-Feroz/cgpa-recovery-planner.git)
   cd cgpa-recovery-planner