# Numer0n

- 重複ありヌメロン

- 数列 (文字列) とイート数, バイト数から候補を全列挙するプログラム

	- enum.cpp

	    通常の数字ヌメロン, 0 ～ 9 の 10 種類まで

	- enum_en.cpp

	    英単語ヌメロン, a ～ z の 26 種類まで

- 現状 27 種類以上の解析には対応していません。

- 全探索しているので、条件によっては死ぬ程時間が掛かる場合があります。( O(type^length) )

- 今後、ミニマックス法にも手を出してみるかも


## 一例

### enum.cpp

0 ～ 9 の 10 種類で構成された 3 桁の整数の場合


```
Press the number of types and length: 10 3
Press numbers, # of eats, and # of bites: 147 0 1
315 candidates:
994 991 984 981 979 978 976 975 973 972 970 964 961 954 951 934 931 924 921 919 918 916 915 913 912 911 910 904 901 894 891 884 881 879 878 876 875 873 872 870 864 861 854 851 834 831 824 821 819 818 816 815 813 812 811 810 804 801 799 798 796 795 793 792 790 789 788 786 785 783 782 780 779 778 776 775 773 772 770 769 768 766 765 763 762 760 759 758 756 755 753 752 750 739 738 736 735 733 732 730 729 728 726 725 723 722 720 709 708 706 705 703 702 700 694 691 684 681 679 678 676 675 673 672 670 664 661 654 651 634 631 624 621 619 618 616 615 613 612 611 610 604 601 594 591 584 581 579 578 576 575 573 572 570 564 561 554 551 534 531 524 521 519 518 516 515 513 512 511 510 504 501 499 498 496 495 494 493 492 490 489 488 486 485 484 483 482 480 469 468 466 465 464 463 462 460 459 458 456 455 454 453 452 450 439 438 436 435 434 433 432 430 429 428 426 425 424 423 422 420 409 408 406 405 404 403 402 400 394 391 384 381 379 378 376 375 373 372 370 364 361 354 351 334 331 324 321 319 318 316 315 313 312 311 310 304 301 294 291 284 281 279 278 276 275 273 272 270 264 261 254 251 234 231 224 221 219 218 216 215 213 212 211 210 204 201 094 091 084 081 079 078 076 075 073 072 070 064 061 054 051 034 031 024 021 019 018 016 015 013 012 011 010 004 001
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: 258 0 0
108 candidates:
001 004 010 011 013 016 019 031 034 061 064 070 073 076 079 091 094 301 304 310 311 313 316 319 331 334 361 364 370 373 376 379 391 394 400 403 404 406 409 430 433 434 436 439 460 463 464 466 469 490 493 494 496 499 601 604 610 611 613 616 619 631 634 661 664 670 673 676 679 691 694 700 703 706 709 730 733 736 739 760 763 766 769 770 773 776 779 790 793 796 799 901 904 910 911 913 916 919 931 934 961 964 970 973 976 979 991 994
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: 369 1 1
12 candidates:
964 961 763 739 679 619 463 439 394 391 376 316
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: 390 0 1
6 candidates:
463 619 679 763 961 964
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: 961 3 0
1 candidates:
961
The answer is 961.
```


### enum_en.cpp

- 英単語ヌメロン

- a ～ z の 26 種類で構成された 4 文字の英単語の場合

```
Press the number of types and length: 26 4
Press numbers, # of eats, and # of bites: aiue 0 1
133672 candidates:

Continue? [y/n] : y
Press numbers, # of eats, and # of bites: with 0 0
65037 candidates:

Continue? [y/n] : y
Press numbers, # of eats, and # of bites: love 0 0
26144 candidates:

Continue? [y/n] : y
Press numbers, # of eats, and # of bites: back 2 0
722 candidates:

Continue? [y/n] : y
Press numbers, # of eats, and # of bites: bard 2 1
28 candidates:
racd dark bazr bayr baxr basr baqr bapr banr bamr bajr bagr bafr badz bady badx bads badq badp badn badm badj badg badf badb bada babr baar
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: bady 1 1
2 candidates:
dark racd
Continue? [y/n] : y
Press numbers, # of eats, and # of bites: dark 4 0
1 candidates:
dark
The answer is dark.
```
