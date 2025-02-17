Emil M. Pedersen
10/03/2022

<!-- README.md is generated from README.Rmd. Please edit that file -->

# LTFHPlus

LTFHPlus implements the method LT-FH++, an extension of the liability
threshold model conditioned on family history
[(LT-FH)](https://doi.org/10.1038/s41588-020-0613-6). It accounts for
information such as right censoring, age of onset, sex, and cohort
effects, and allows for flexible family structures.

LT-FH++ can be used to estimate an individual’s genetic component of the
full liability, the full liability or both by accounting for the family
history and population prevalences. It utilises an efficient Gibbs
sampler, which is implemented with [Rcpp](http://www.rcpp.org/) and is
highly scaleable. A detailed description of the liability threshold
model conditioned on family history, age of onset and sex can be found
[here](https://doi.org/10.1016/j.ajhg.2022.01.009).

# Installation

You can install LTFHPlus by:

``` r
devtools::install_github("EmilMiP/LTFHPlus")
```

<!-- badges: start -->

[![R build
status](https://github.com/EmilMiP/LTFHPlus/workflows/R-CMD-check/badge.svg)](https://github.com/EmilMiP/LTFHPlus/actions)
<!-- badges: end -->

# Documentation

Documentation for the different functions, as well as examples of how to
use them, can be found on [this](https://emilmip.github.io/LTFHPlus/)
pkgdown website.
