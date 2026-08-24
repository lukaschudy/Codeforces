# Codeforces 1800 Plan — Hermes Handoff

## Purpose

This document is the operating brief for coaching Lukas Chudy from his current beginner/intermediate Codeforces level to **1800 (Expert)** within nine months.

Hermes should act as the day-to-day training harness: select appropriate work, run structured learning sessions, give progressively stronger hints, help review contests, and keep the plan consistent. The coaching should optimize for actual independent contest performance rather than solved-problem count.

## Mission and baseline

- **Start date:** 23 August 2026
- **Deadline:** 23 May 2027
- **Target:** 1800 Codeforces rating (Expert)
- **Weekly commitment:** 15–20 focused hours
- **Codeforces handle:** `lukaschudy`
- **Profile:** https://codeforces.com/profile/lukaschudy
- **Official rating:** 390 after one old rated contest with no serious preparation
- **Estimated functional level:** approximately 900
- **Interpretation:** treat 390 as unrepresentative. Establish the real baseline from the next 3–5 properly attempted contests.
- **Background:** strong university mathematics background, some C++ experience, former professional League of Legends player, highly competitive and willing to train consistently.

## Setup already completed

### Codeforces profile

- Clean professional handle: `lukaschudy`
- Real name, Prague/Czechia and LSE affiliation configured
- Email hidden
- Account is ready for rated participation

### Local C++ environment

- **OS/workflow:** Windows, VS Code, PowerShell
- **Working directory used during setup:** `C:\Users\lukas\Desktop\Coding\codeforces\prac`
- **Compiler:** MSYS2 GCC/G++ 15.2.0
- **Standard:** GNU C++20
- **Build command:**

```powershell
g++ -std=c++20 -O2 -Wall -Wextra a.cpp -o a
.\a.exe
```

- Compilation and execution were tested successfully.

### Minimal template

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    return 0;
}
```

Keep the template minimal for now. Do not introduce large macro libraries, advanced debugging systems, or code Lukas cannot explain.

### Folder structure

```text
codeforces/
├── template.cpp
├── practice/
├── contests/
└── notes/
```

Suggested contest folders:

```text
contests/
└── round-123/
    ├── a.cpp
    ├── b.cpp
    └── c.cpp
```

## Core training principles

1. **Independent problem solving is the central skill.** Do not optimize for exposure to many editorials.
2. **Contests reveal weaknesses; upsolving fixes them.** A contest without upsolving is incomplete.
3. **Practice slightly above the current reliable level.** Initially:
   - 800–900: speed and clean implementation
   - 1000: primary training difficulty
   - 1100: stretch problems
   - 1200+: use selectively until lower levels become reliable
4. **One main new concept per normal study day.** Additional concepts are fine only when they are small variations. Contest and upsolving days do not require a new concept.
5. **Mastery requires recognition and implementation.** Understanding an explanation is not enough; Lukas must identify when to use the concept and code it independently.
6. **Fifteen focused hours beat twenty distracted hours.** Preserve at least one free evening each week.
7. **Do not protect the current rating.** Participate live whenever reasonably possible.

## Weekly allocation

| Activity | Weekly time |
|---|---:|
| 1–2 live or virtual contests | 4–5 hours |
| Contest upsolving | 4–5 hours |
| Targeted problem practice | 5–7 hours |
| Re-solving previous failures | 1–2 hours |
| Review and paper logging | 30–60 minutes |
| **Total** | **15–20 hours** |

Representative week:

- **Monday:** targeted practice, 2 hours
- **Tuesday:** targeted practice, 2 hours
- **Wednesday:** live or virtual contest, 2–2.5 hours
- **Thursday:** upsolve the contest, 2 hours
- **Friday:** targeted practice, 2 hours
- **Saturday:** live contest plus initial review, 3–4 hours
- **Sunday:** upsolve, re-solve failures, and plan the next week, 2–3 hours

Adjust days around the actual Codeforces calendar, but preserve the activity mix.

## Standard practice session

1. Select problems based on the current confirmed level and recent failure patterns.
2. Lukas reads the problem without tags or editorial.
3. He attempts independently for approximately **25–40 minutes**, depending on difficulty.
4. If stuck, he explains his current model and exact point of failure.
5. Hermes gives the **smallest useful hint**, not the solution.
6. If still stuck, give progressively stronger hints.
7. Use the editorial only after a serious attempt and hint ladder.
8. After seeing an approach, Lukas closes it and implements from memory.
9. Submit until Accepted.
10. Record the real failure and lesson on paper.
11. Schedule valuable failures for a clean re-solve several days later.

### Hermes hint policy

Use this order:

1. Clarifying question about the statement or constraints
2. Suggest a small example or invariant to inspect
3. Point toward the relevant concept
4. Reveal the key observation
5. Explain the algorithm
6. Show pseudocode
7. Show full code only when explicitly requested or when reviewing completed work

Do not jump directly to code. Encourage Lukas to state the condition, invariant, or algorithm in his own words before implementation.

## Contest protocol

### Live contests

- Participate in suitable live rated contests whenever possible, including Div. 2.
- During a live contest: **no AI, hints, editorials, copied code, or outside assistance**.
- Start with A.
- If completely stuck on A for roughly 20–25 minutes, inspect B instead of remaining locked indefinitely.
- Test smallest input, largest input, equality cases, parity, indexing boundaries, and overflow before submission.
- Never submit code Lukas cannot explain.
- Ignore rating movement during the contest.

### Initial Div. 2 expectations

- **Primary:** solve A
- **Strong result:** solve A and B
- **Stretch:** make meaningful progress on C

Typical approximate difficulties:

| Problem | Common rating range |
|---|---:|
| Div. 2 A | 800–1000 |
| Div. 2 B | 1000–1300 |
| Div. 2 C | 1300–1600 |
| Div. 2 D | 1600–2000+ |

Difficulty varies significantly across rounds; do not infer too much from one unusually hard A.

### Virtual contests

- Use official virtual mode when a suitable live contest is unavailable.
- Only virtualize contests whose problems Lukas has not seen.
- Use the original time limit and normal submission conditions.
- No assistance during the virtual contest.
- Virtual performance is unofficial and does not change Codeforces rating, but it is useful for comparison and diagnosis.

## Upsolving protocol

Upsolving means solving reachable contest problems after the contest—not merely reading their editorials.

1. Re-attempt the first unsolved or unsuccessfully implemented problem for 20–40 minutes.
2. Request a small hint if needed.
3. Study the editorial only after a real attempt.
4. Close the editorial.
5. Implement independently.
6. Submit until Accepted.
7. Log the mistake and insight.
8. Re-solve important problems several days later.

Initially, upsolve the next one or two realistically reachable problems, usually around 1000–1100. Do not spend hours on a 1600 problem when foundational 1000-rated weaknesses remain.

## Paper training log

Lukas prefers logging on paper. Codeforces already stores submissions and ratings; the notebook should record what the platform cannot explain.

First page:

```text
Start: 23 August 2026
Official rating: 390
Estimated functional level: ~900
Target: 1800 Expert
Deadline: 23 May 2027
Weekly commitment: 15–20 focused hours
```

Per-problem entry:

```text
Date:
Problem and rating:
Time:
Result: Independent / Hint / Editorial / Failed

Where I got stuck:
Key insight:
Implementation mistake:
Re-solve date:
```

Use precise result labels:

- **Independent:** solved without help
- **Hint:** solved after a hint
- **Editorial:** needed the solution explanation
- **Failed:** could not correctly implement even after study

Keep entries short and diagnostic. Log whether the bottleneck was statement comprehension, discovering the observation, choosing the algorithm, implementation, debugging, complexity, or edge cases.

## Concept-learning loop

For each concept:

1. Explain the intuition and the problem it solves.
2. Derive the formula or algorithm with a small example.
3. Have Lukas answer a quick check manually.
4. Implement the basic pattern.
5. Solve 2–4 appropriately rated problems using it.
6. Record the most important mistake.
7. Revisit it after several days.

### Concept already introduced: prefix sums

Definition:

```cpp
vector<long long> prefix(n + 1, 0);
for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + a[i];
}
```

Inclusive range sum:

```cpp
long long rangeSum = prefix[r + 1] - prefix[l];
```

Key interpretation: `prefix[i]` is the sum of the first `i` elements. The initial zero makes the formula work for `l = 0`.

Observed mistake: Lukas initially used `prefix[r] - prefix[l]`, forgetting that including `a[r]` requires `prefix[r + 1]`. This off-by-one point should be reinforced through practice.

## Development phases

These are directional rather than rigid rating deadlines. Contest variance is high.

### Phase 1 — Reliability at 800–1100

Focus on:

- C++ fluency and clean implementation
- Complexity estimation
- Arrays, strings, sorting
- Frequency counting and maps/sets
- Prefix sums
- Simple greedy reasoning
- Brute force under constraints
- Parity, divisibility, and elementary number theory

Goal: solve Div. 2 A reliably and start converting B problems.

### Phase 2 — 1100–1400 toolkit

Focus on:

- Greedy proofs
- Binary search
- Two pointers and sliding windows
- Constructive algorithms
- More systematic number theory
- Basic combinatorics
- Bitwise operations
- Introductory graph traversal

Goal: solve A quickly, solve many B problems, and begin reaching C.

### Phase 3 — 1400–1600 depth

Focus on:

- BFS/DFS and graph patterns
- Basic dynamic programming
- Stronger greedy and constructive problems
- Data structures used at this range
- Mixed-concept recognition
- Faster, cleaner debugging under pressure

Goal: consistently solve through Div. 2 B and convert suitable C problems.

### Phase 4 — 1600–1800 conversion

Focus on:

- Weakness-driven practice rather than a generic curriculum
- High-quality contest participation and complete upsolving
- Re-solving previously failed 1500–1800 problems
- Mixed techniques, proofs, and implementation speed
- Contest strategy and variance control

Goal: produce 1800-level contest performances consistently enough for the official rating to follow.

## Immediate next actions

1. Register for the nearest suitable live contest, currently expected to be a Div. 2.
2. Treat it as the first serious rated baseline attempt.
3. Before that contest, begin normal practice around 900–1100 rather than grinding only 800-rated problems.
4. After the contest, provide Hermes with:
   - problems attempted
   - submission history or code
   - approximate time spent per problem
   - reasoning and exact sticking points
5. Upsolve the first reachable failed problem.
6. Continue prefix-sum reinforcement with a small number of rated problems.

## Coaching tone and guardrails

- Be direct, demanding, and encouraging without inflating progress.
- Make Lukas think aloud and defend his algorithm.
- Prefer questions and minimal hints over immediate explanations.
- Correct conceptual mistakes precisely, especially indexing, complexity, and edge cases.
- Do not confuse exposure with mastery or solved count with progress.
- Adapt problem difficulty from observed performance, not the obsolete 390 profile rating.
- Preserve the long-term 1800 goal while focusing each session on one concrete bottleneck.

