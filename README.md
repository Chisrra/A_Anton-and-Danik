# A. Anton and Danik

- <h6> <center> Time limit per test 1 second </center> </h6>
- <h6> <center> Memory limit per test 256 megabytes </center> </h6>
- <h6> <center> input: standard input </center> </h6>
- <h6> <center>output: standard output </center> </h6>

Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.
<h5>Input</h5>

The first line of the input contains a single integer *n* `(1 ≤ n ≤ 100 000)` — the number of games played.

The second line contains a string *s*, consisting of *n* uppercase English letters `'A'` and `'D'` — the outcome of each of the games. The *i-th* character of the string is equal to `'A'` if the Anton won the *i-th* game and `'D'` if Danik won the *i-th* game.

<h5>Output</h5>

If Anton won more games than Danik, print `"Anton"` (without quotes) in the only line of the output.

If Danik won more games than Anton, print `"Danik"` (without quotes) in the only line of the output.

If Anton and Danik won the same number of games, print `"Friendship"` (without quotes).

<h5>Example 1</h5>

<h6>Input</h6>

>6

>ADAAAA

<h6>Output</h6>

>Anton 

<h5>Example 2</h5>

<h6>Input</h6>

>7

>DDDAADA

<h6>Output</h6>

>Danik 


<h5>Example 3</h5>

<h6>Input</h6>

>6

>DADADA

<h6>Output</h6>

>Friendship

## Codeforces Link
[A. Anton and Danik](https://codeforces.com/problemset/problem/734/A)
