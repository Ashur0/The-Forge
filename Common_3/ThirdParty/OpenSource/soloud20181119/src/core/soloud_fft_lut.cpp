/* **************************************************
 *  WARNING: this is a generated file. Do not edit. *
 *  Any edits will be overwritten by the generator. *
 ************************************************** */

/*
SoLoud audio engine
Copyright (c) 2013-2015 Jari Komppa

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software
   in a product, an acknowledgment in the product documentation would be
   appreciated but is not required.

   2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

   3. This notice may not be removed or altered from any source
   distribution.
*/

/* SoLoud Lookup Table Generator (c)2015 Jari Komppa http://iki.fi/sol/ */

#include "../../../../OS/Interfaces/IMemory.h"

int Soloud_fft_bitrev_10[1024] = {
0, 512, 256, 768, 128, 640, 384, 896, 64, 576, 320, 832, 192, 704, 448, 
960, 32, 544, 288, 800, 160, 672, 416, 928, 96, 608, 352, 864, 224, 736, 
480, 992, 16, 528, 272, 784, 144, 656, 400, 912, 80, 592, 336, 848, 208, 
720, 464, 976, 48, 560, 304, 816, 176, 688, 432, 944, 112, 624, 368, 880, 
240, 752, 496, 1008, 8, 520, 264, 776, 136, 648, 392, 904, 72, 584, 328, 
840, 200, 712, 456, 968, 40, 552, 296, 808, 168, 680, 424, 936, 104, 616, 
360, 872, 232, 744, 488, 1000, 24, 536, 280, 792, 152, 664, 408, 920, 88, 
600, 344, 856, 216, 728, 472, 984, 56, 568, 312, 824, 184, 696, 440, 952, 
120, 632, 376, 888, 248, 760, 504, 1016, 4, 516, 260, 772, 132, 644, 388, 
900, 68, 580, 324, 836, 196, 708, 452, 964, 36, 548, 292, 804, 164, 676, 
420, 932, 100, 612, 356, 868, 228, 740, 484, 996, 20, 532, 276, 788, 148, 
660, 404, 916, 84, 596, 340, 852, 212, 724, 468, 980, 52, 564, 308, 820, 
180, 692, 436, 948, 116, 628, 372, 884, 244, 756, 500, 1012, 12, 524, 268, 
780, 140, 652, 396, 908, 76, 588, 332, 844, 204, 716, 460, 972, 44, 556, 
300, 812, 172, 684, 428, 940, 108, 620, 364, 876, 236, 748, 492, 1004, 
28, 540, 284, 796, 156, 668, 412, 924, 92, 604, 348, 860, 220, 732, 476, 
988, 60, 572, 316, 828, 188, 700, 444, 956, 124, 636, 380, 892, 252, 764, 
508, 1020, 2, 514, 258, 770, 130, 642, 386, 898, 66, 578, 322, 834, 194, 
706, 450, 962, 34, 546, 290, 802, 162, 674, 418, 930, 98, 610, 354, 866, 
226, 738, 482, 994, 18, 530, 274, 786, 146, 658, 402, 914, 82, 594, 338, 
850, 210, 722, 466, 978, 50, 562, 306, 818, 178, 690, 434, 946, 114, 626, 
370, 882, 242, 754, 498, 1010, 10, 522, 266, 778, 138, 650, 394, 906, 74, 
586, 330, 842, 202, 714, 458, 970, 42, 554, 298, 810, 170, 682, 426, 938, 
106, 618, 362, 874, 234, 746, 490, 1002, 26, 538, 282, 794, 154, 666, 410, 
922, 90, 602, 346, 858, 218, 730, 474, 986, 58, 570, 314, 826, 186, 698, 
442, 954, 122, 634, 378, 890, 250, 762, 506, 1018, 6, 518, 262, 774, 134, 
646, 390, 902, 70, 582, 326, 838, 198, 710, 454, 966, 38, 550, 294, 806, 
166, 678, 422, 934, 102, 614, 358, 870, 230, 742, 486, 998, 22, 534, 278, 
790, 150, 662, 406, 918, 86, 598, 342, 854, 214, 726, 470, 982, 54, 566, 
310, 822, 182, 694, 438, 950, 118, 630, 374, 886, 246, 758, 502, 1014, 
14, 526, 270, 782, 142, 654, 398, 910, 78, 590, 334, 846, 206, 718, 462, 
974, 46, 558, 302, 814, 174, 686, 430, 942, 110, 622, 366, 878, 238, 750, 
494, 1006, 30, 542, 286, 798, 158, 670, 414, 926, 94, 606, 350, 862, 222, 
734, 478, 990, 62, 574, 318, 830, 190, 702, 446, 958, 126, 638, 382, 894, 
254, 766, 510, 1022, 1, 513, 257, 769, 129, 641, 385, 897, 65, 577, 321, 
833, 193, 705, 449, 961, 33, 545, 289, 801, 161, 673, 417, 929, 97, 609, 
353, 865, 225, 737, 481, 993, 17, 529, 273, 785, 145, 657, 401, 913, 81, 
593, 337, 849, 209, 721, 465, 977, 49, 561, 305, 817, 177, 689, 433, 945, 
113, 625, 369, 881, 241, 753, 497, 1009, 9, 521, 265, 777, 137, 649, 393, 
905, 73, 585, 329, 841, 201, 713, 457, 969, 41, 553, 297, 809, 169, 681, 
425, 937, 105, 617, 361, 873, 233, 745, 489, 1001, 25, 537, 281, 793, 153, 
665, 409, 921, 89, 601, 345, 857, 217, 729, 473, 985, 57, 569, 313, 825, 
185, 697, 441, 953, 121, 633, 377, 889, 249, 761, 505, 1017, 5, 517, 261, 
773, 133, 645, 389, 901, 69, 581, 325, 837, 197, 709, 453, 965, 37, 549, 
293, 805, 165, 677, 421, 933, 101, 613, 357, 869, 229, 741, 485, 997, 21, 
533, 277, 789, 149, 661, 405, 917, 85, 597, 341, 853, 213, 725, 469, 981, 
53, 565, 309, 821, 181, 693, 437, 949, 117, 629, 373, 885, 245, 757, 501, 
1013, 13, 525, 269, 781, 141, 653, 397, 909, 77, 589, 333, 845, 205, 717, 
461, 973, 45, 557, 301, 813, 173, 685, 429, 941, 109, 621, 365, 877, 237, 
749, 493, 1005, 29, 541, 285, 797, 157, 669, 413, 925, 93, 605, 349, 861, 
221, 733, 477, 989, 61, 573, 317, 829, 189, 701, 445, 957, 125, 637, 381, 
893, 253, 765, 509, 1021, 3, 515, 259, 771, 131, 643, 387, 899, 67, 579, 
323, 835, 195, 707, 451, 963, 35, 547, 291, 803, 163, 675, 419, 931, 99, 
611, 355, 867, 227, 739, 483, 995, 19, 531, 275, 787, 147, 659, 403, 915, 
83, 595, 339, 851, 211, 723, 467, 979, 51, 563, 307, 819, 179, 691, 435, 
947, 115, 627, 371, 883, 243, 755, 499, 1011, 11, 523, 267, 779, 139, 651, 
395, 907, 75, 587, 331, 843, 203, 715, 459, 971, 43, 555, 299, 811, 171, 
683, 427, 939, 107, 619, 363, 875, 235, 747, 491, 1003, 27, 539, 283, 795, 
155, 667, 411, 923, 91, 603, 347, 859, 219, 731, 475, 987, 59, 571, 315, 
827, 187, 699, 443, 955, 123, 635, 379, 891, 251, 763, 507, 1019, 7, 519, 
263, 775, 135, 647, 391, 903, 71, 583, 327, 839, 199, 711, 455, 967, 39, 
551, 295, 807, 167, 679, 423, 935, 103, 615, 359, 871, 231, 743, 487, 999, 
23, 535, 279, 791, 151, 663, 407, 919, 87, 599, 343, 855, 215, 727, 471, 
983, 55, 567, 311, 823, 183, 695, 439, 951, 119, 631, 375, 887, 247, 759, 
503, 1015, 15, 527, 271, 783, 143, 655, 399, 911, 79, 591, 335, 847, 207, 
719, 463, 975, 47, 559, 303, 815, 175, 687, 431, 943, 111, 623, 367, 879, 
239, 751, 495, 1007, 31, 543, 287, 799, 159, 671, 415, 927, 95, 607, 351, 
863, 223, 735, 479, 991, 63, 575, 319, 831, 191, 703, 447, 959, 127, 639, 
383, 895, 255, 767, 511, 1023};

int Soloud_fft_bitrev_8[256] = {
0, 128, 64, 192, 32, 160, 96, 224, 16, 144, 80, 208, 48, 176, 112, 240, 
8, 136, 72, 200, 40, 168, 104, 232, 24, 152, 88, 216, 56, 184, 120, 248, 
4, 132, 68, 196, 36, 164, 100, 228, 20, 148, 84, 212, 52, 180, 116, 244, 
12, 140, 76, 204, 44, 172, 108, 236, 28, 156, 92, 220, 60, 188, 124, 252, 
2, 130, 66, 194, 34, 162, 98, 226, 18, 146, 82, 210, 50, 178, 114, 242, 
10, 138, 74, 202, 42, 170, 106, 234, 26, 154, 90, 218, 58, 186, 122, 250, 
6, 134, 70, 198, 38, 166, 102, 230, 22, 150, 86, 214, 54, 182, 118, 246, 
14, 142, 78, 206, 46, 174, 110, 238, 30, 158, 94, 222, 62, 190, 126, 254, 
1, 129, 65, 193, 33, 161, 97, 225, 17, 145, 81, 209, 49, 177, 113, 241, 
9, 137, 73, 201, 41, 169, 105, 233, 25, 153, 89, 217, 57, 185, 121, 249, 
5, 133, 69, 197, 37, 165, 101, 229, 21, 149, 85, 213, 53, 181, 117, 245, 
13, 141, 77, 205, 45, 173, 109, 237, 29, 157, 93, 221, 61, 189, 125, 253, 
3, 131, 67, 195, 35, 163, 99, 227, 19, 147, 83, 211, 51, 179, 115, 243, 
11, 139, 75, 203, 43, 171, 107, 235, 27, 155, 91, 219, 59, 187, 123, 251, 
7, 135, 71, 199, 39, 167, 103, 231, 23, 151, 87, 215, 55, 183, 119, 247, 
15, 143, 79, 207, 47, 175, 111, 239, 31, 159, 95, 223, 63, 191, 127, 255
};

float Soloud_fft_trig_10[508] = {
1.000000000000000000f, 0.923879504203796390f, 0.707106769084930420f, 
0.382683396339416500f, 1.000000000000000000f, 0.980785250663757320f, 
0.923879504203796390f, 0.831469595432281490f, 0.707106769084930420f, 
0.555570185184478760f, 0.382683396339416500f, 0.195090278983116150f, 
1.000000000000000000f, 0.995184719562530520f, 0.980785250663757320f, 
0.956940352916717530f, 0.923879504203796390f, 0.881921231746673580f, 
0.831469595432281490f, 0.773010432720184330f, 0.707106769084930420f, 
0.634393274784088130f, 0.555570185184478760f, 0.471396714448928830f, 
0.382683396339416500f, 0.290284633636474610f, 0.195090278983116150f, 
0.098017096519470215f, 1.000000000000000000f, 0.998795449733734130f, 
0.995184719562530520f, 0.989176511764526370f, 0.980785250663757320f, 
0.970031261444091800f, 0.956940352916717530f, 0.941544055938720700f, 
0.923879504203796390f, 0.903989315032958980f, 0.881921231746673580f, 
0.857728600502014160f, 0.831469595432281490f, 0.803207516670227050f, 
0.773010432720184330f, 0.740951120853424070f, 0.707106769084930420f, 
0.671558916568756100f, 0.634393274784088130f, 0.595699310302734380f, 
0.555570185184478760f, 0.514102697372436520f, 0.471396714448928830f, 
0.427555054426193240f, 0.382683396339416500f, 0.336889833211898800f, 
0.290284633636474610f, 0.242980137467384340f, 0.195090278983116150f, 
0.146730437874794010f, 0.098017096519470215f, 0.049067631363868713f, 
1.000000000000000000f, 0.999698817729949950f, 0.998795449733734130f, 
0.997290432453155520f, 0.995184719562530520f, 0.992479562759399410f, 
0.989176511764526370f, 0.985277652740478520f, 0.980785250663757320f, 
0.975702106952667240f, 0.970031261444091800f, 0.963776051998138430f, 
0.956940352916717530f, 0.949528157711029050f, 0.941544055938720700f, 
0.932992815971374510f, 0.923879504203796390f, 0.914209723472595210f, 
0.903989315032958980f, 0.893224298954010010f, 0.881921231746673580f, 
0.870086967945098880f, 0.857728600502014160f, 0.844853579998016360f, 
0.831469595432281490f, 0.817584812641143800f, 0.803207516670227050f, 
0.788346409797668460f, 0.773010432720184330f, 0.757208824157714840f, 
0.740951120853424070f, 0.724247097969055180f, 0.707106769084930420f, 
0.689540505409240720f, 0.671558916568756100f, 0.653172850608825680f, 
0.634393274784088130f, 0.615231573581695560f, 0.595699310302734380f, 
0.575808167457580570f, 0.555570185184478760f, 0.534997582435607910f, 
0.514102697372436520f, 0.492898166179656980f, 0.471396714448928830f, 
0.449611306190490720f, 0.427555054426193240f, 0.405241280794143680f, 
0.382683396339416500f, 0.359894990921020510f, 0.336889833211898800f, 
0.313681721687316890f, 0.290284633636474610f, 0.266712725162506100f, 
0.242980137467384340f, 0.219101205468177800f, 0.195090278983116150f, 
0.170961856842041020f, 0.146730437874794010f, 0.122410632669925690f, 
0.098017096519470215f, 0.073564521968364716f, 0.049067631363868713f, 
0.024541186168789864f, 1.000000000000000000f, 0.999924719333648680f, 
0.999698817729949950f, 0.999322354793548580f, 0.998795449733734130f, 
0.998118102550506590f, 0.997290432453155520f, 0.996312618255615230f, 
0.995184719562530520f, 0.993906974792480470f, 0.992479562759399410f, 
0.990902662277221680f, 0.989176511764526370f, 0.987301409244537350f, 
0.985277652740478520f, 0.983105480670928960f, 0.980785250663757320f, 
0.978317379951477050f, 0.975702106952667240f, 0.972939968109130860f, 
0.970031261444091800f, 0.966976463794708250f, 0.963776051998138430f, 
0.960430502891540530f, 0.956940352916717530f, 0.953306019306182860f, 
0.949528157711029050f, 0.945607304573059080f, 0.941544055938720700f, 
0.937339007854461670f, 0.932992815971374510f, 0.928506076335906980f, 
0.923879504203796390f, 0.919113874435424800f, 0.914209723472595210f, 
0.909168004989624020f, 0.903989315032958980f, 0.898674488067626950f, 
0.893224298954010010f, 0.887639641761779790f, 0.881921231746673580f, 
0.876070082187652590f, 0.870086967945098880f, 0.863972842693328860f, 
0.857728600502014160f, 0.851355195045471190f, 0.844853579998016360f, 
0.838224709033966060f, 0.831469595432281490f, 0.824589312076568600f, 
0.817584812641143800f, 0.810457170009613040f, 0.803207516670227050f, 
0.795836865901947020f, 0.788346409797668460f, 0.780737221240997310f, 
0.773010432720184330f, 0.765167236328125000f, 0.757208824157714840f, 
0.749136388301849370f, 0.740951120853424070f, 0.732654273509979250f, 
0.724247097969055180f, 0.715730786323547360f, 0.707106769084930420f, 
0.698376238346099850f, 0.689540505409240720f, 0.680601000785827640f, 
0.671558916568756100f, 0.662415742874145510f, 0.653172850608825680f, 
0.643831551074981690f, 0.634393274784088130f, 0.624859452247619630f, 
0.615231573581695560f, 0.605511009693145750f, 0.595699310302734380f, 
0.585797846317291260f, 0.575808167457580570f, 0.565731763839721680f, 
0.555570185184478760f, 0.545324981212615970f, 0.534997582435607910f, 
0.524589657783508300f, 0.514102697372436520f, 0.503538370132446290f, 
0.492898166179656980f, 0.482183754444122310f, 0.471396714448928830f, 
0.460538685321807860f, 0.449611306190490720f, 0.438616216182708740f, 
0.427555054426193240f, 0.416429519653320310f, 0.405241280794143680f, 
0.393992006778717040f, 0.382683396339416500f, 0.371317178010940550f, 
0.359894990921020510f, 0.348418653011322020f, 0.336889833211898800f, 
0.325310260057449340f, 0.313681721687316890f, 0.302005916833877560f, 
0.290284633636474610f, 0.278519660234451290f, 0.266712725162506100f, 
0.254865616559982300f, 0.242980137467384340f, 0.231058076024055480f, 
0.219101205468177800f, 0.207111343741416930f, 0.195090278983116150f, 
0.183039844036102290f, 0.170961856842041020f, 0.158858105540275570f, 
0.146730437874794010f, 0.134580671787261960f, 0.122410632669925690f, 
0.110222168266773220f, 0.098017096519470215f, 0.085797272622585297f, 
0.073564521968364716f, 0.061320696026086807f, 0.049067631363868713f, 
0.036807179450988770f, 0.024541186168789864f, 0.012271494604647160f, 
1.000000000000000000f, 0.999981164932250980f, 0.999924719333648680f, 
0.999830603599548340f, 0.999698817729949950f, 0.999529421329498290f, 
0.999322354793548580f, 0.999077737331390380f, 0.998795449733734130f, 
0.998475551605224610f, 0.998118102550506590f, 0.997723042964935300f, 
0.997290432453155520f, 0.996820271015167240f, 0.996312618255615230f, 
0.995767414569854740f, 0.995184719562530520f, 0.994564592838287350f, 
0.993906974792480470f, 0.993211925029754640f, 0.992479562759399410f, 
0.991709768772125240f, 0.990902662277221680f, 0.990058183670043950f, 
0.989176511764526370f, 0.988257586956024170f, 0.987301409244537350f, 
0.986308097839355470f, 0.985277652740478520f, 0.984210073947906490f, 
0.983105480670928960f, 0.981963872909545900f, 0.980785250663757320f, 
0.979569792747497560f, 0.978317379951477050f, 0.977028131484985350f, 
0.975702106952667240f, 0.974339365959167480f, 0.972939968109130860f, 
0.971503913402557370f, 0.970031261444091800f, 0.968522071838378910f, 
0.966976463794708250f, 0.965394437313079830f, 0.963776051998138430f, 
0.962121427059173580f, 0.960430502891540530f, 0.958703458309173580f, 
0.956940352916717530f, 0.955141186714172360f, 0.953306019306182860f, 
0.951435029506683350f, 0.949528157711029050f, 0.947585582733154300f, 
0.945607304573059080f, 0.943593442440032960f, 0.941544055938720700f, 
0.939459204673767090f, 0.937339007854461670f, 0.935183525085449220f, 
0.932992815971374510f, 0.930766940116882320f, 0.928506076335906980f, 
0.926210224628448490f, 0.923879504203796390f, 0.921514034271240230f, 
0.919113874435424800f, 0.916679084300994870f, 0.914209723472595210f, 
0.911706030368804930f, 0.909168004989624020f, 0.906595706939697270f, 
0.903989315032958980f, 0.901348829269409180f, 0.898674488067626950f, 
0.895966231822967530f, 0.893224298954010010f, 0.890448689460754390f, 
0.887639641761779790f, 0.884797096252441410f, 0.881921231746673580f, 
0.879012227058410640f, 0.876070082187652590f, 0.873094975948333740f, 
0.870086967945098880f, 0.867046236991882320f, 0.863972842693328860f, 
0.860866904258728030f, 0.857728600502014160f, 0.854557991027832030f, 
0.851355195045471190f, 0.848120331764221190f, 0.844853579998016360f, 
0.841554939746856690f, 0.838224709033966060f, 0.834862887859344480f, 
0.831469595432281490f, 0.828045010566711430f, 0.824589312076568600f, 
0.821102499961853030f, 0.817584812641143800f, 0.814036309719085690f, 
0.810457170009613040f, 0.806847572326660160f, 0.803207516670227050f, 
0.799537241458892820f, 0.795836865901947020f, 0.792106568813323970f, 
0.788346409797668460f, 0.784556567668914790f, 0.780737221240997310f, 
0.776888430118560790f, 0.773010432720184330f, 0.769103348255157470f, 
0.765167236328125000f, 0.761202394962310790f, 0.757208824157714840f, 
0.753186762332916260f, 0.749136388301849370f, 0.745057761669158940f, 
0.740951120853424070f, 0.736816525459289550f, 0.732654273509979250f, 
0.728464365005493160f, 0.724247097969055180f, 0.720002472400665280f, 
0.715730786323547360f, 0.711432158946990970f, 0.707106769084930420f, 
0.702754735946655270f, 0.698376238346099850f, 0.693971455097198490f, 
0.689540505409240720f, 0.685083627700805660f, 0.680601000785827640f, 
0.676092684268951420f, 0.671558916568756100f, 0.666999876499176030f, 
0.662415742874145510f, 0.657806694507598880f, 0.653172850608825680f, 
0.648514389991760250f, 0.643831551074981690f, 0.639124453067779540f, 
0.634393274784088130f, 0.629638195037841800f, 0.624859452247619630f, 
0.620057165622711180f, 0.615231573581695560f, 0.610382795333862300f, 
0.605511009693145750f, 0.600616455078125000f, 0.595699310302734380f, 
0.590759694576263430f, 0.585797846317291260f, 0.580813944339752200f, 
0.575808167457580570f, 0.570780694484710690f, 0.565731763839721680f, 
0.560661554336547850f, 0.555570185184478760f, 0.550457954406738280f, 
0.545324981212615970f, 0.540171444416046140f, 0.534997582435607910f, 
0.529803574085235600f, 0.524589657783508300f, 0.519355952739715580f, 
0.514102697372436520f, 0.508830130100250240f, 0.503538370132446290f, 
0.498227655887603760f, 0.492898166179656980f, 0.487550139427185060f, 
0.482183754444122310f, 0.476799190044403080f, 0.471396714448928830f, 
0.465976476669311520f, 0.460538685321807860f, 0.455083549022674560f, 
0.449611306190490720f, 0.444122105836868290f, 0.438616216182708740f, 
0.433093786239624020f, 0.427555054426193240f, 0.422000229358673100f, 
0.416429519653320310f, 0.410843133926391600f, 0.405241280794143680f, 
0.399624168872833250f, 0.393992006778717040f, 0.388345003128051760f, 
0.382683396339416500f, 0.377007365226745610f, 0.371317178010940550f, 
0.365612953901290890f, 0.359894990921020510f, 0.354163497686386110f, 
0.348418653011322020f, 0.342660695314407350f, 0.336889833211898800f, 
0.331106275320053100f, 0.325310260057449340f, 0.319501996040344240f, 
0.313681721687316890f, 0.307849615812301640f, 0.302005916833877560f, 
0.296150863170623780f, 0.290284633636474610f, 0.284407496452331540f, 
0.278519660234451290f, 0.272621333599090580f, 0.266712725162506100f, 
0.260794073343276980f, 0.254865616559982300f, 0.248927563428878780f, 
0.242980137467384340f, 0.237023577094078060f, 0.231058076024055480f, 
0.225083872675895690f, 0.219101205468177800f, 0.213110283017158510f, 
0.207111343741416930f, 0.201104596257209780f, 0.195090278983116150f, 
0.189068630337715150f, 0.183039844036102290f, 0.177004188299179080f, 
0.170961856842041020f, 0.164913088083267210f, 0.158858105540275570f, 
0.152797147631645200f, 0.146730437874794010f, 0.140658199787139890f, 
0.134580671787261960f, 0.128498077392578130f, 0.122410632669925690f, 
0.116318590939044950f, 0.110222168266773220f, 0.104121595621109010f, 
0.098017096519470215f, 0.091908916831016541f, 0.085797272622585297f, 
0.079682394862174988f, 0.073564521968364716f, 0.067443877458572388f, 
0.061320696026086807f, 0.055195201188325882f, 0.049067631363868713f, 
0.042938213795423508f, 0.036807179450988770f, 0.030674761161208153f, 
0.024541186168789864f, 0.018406687304377556f, 0.012271494604647160f, 
0.006135840900242329f
};

float Soloud_fft_trig_8[124] = {
1.000000000000000000f, 0.923879504203796390f, 0.707106769084930420f, 
0.382683396339416500f, 1.000000000000000000f, 0.980785250663757320f, 
0.923879504203796390f, 0.831469595432281490f, 0.707106769084930420f, 
0.555570185184478760f, 0.382683396339416500f, 0.195090278983116150f, 
1.000000000000000000f, 0.995184719562530520f, 0.980785250663757320f, 
0.956940352916717530f, 0.923879504203796390f, 0.881921231746673580f, 
0.831469595432281490f, 0.773010432720184330f, 0.707106769084930420f, 
0.634393274784088130f, 0.555570185184478760f, 0.471396714448928830f, 
0.382683396339416500f, 0.290284633636474610f, 0.195090278983116150f, 
0.098017096519470215f, 1.000000000000000000f, 0.998795449733734130f, 
0.995184719562530520f, 0.989176511764526370f, 0.980785250663757320f, 
0.970031261444091800f, 0.956940352916717530f, 0.941544055938720700f, 
0.923879504203796390f, 0.903989315032958980f, 0.881921231746673580f, 
0.857728600502014160f, 0.831469595432281490f, 0.803207516670227050f, 
0.773010432720184330f, 0.740951120853424070f, 0.707106769084930420f, 
0.671558916568756100f, 0.634393274784088130f, 0.595699310302734380f, 
0.555570185184478760f, 0.514102697372436520f, 0.471396714448928830f, 
0.427555054426193240f, 0.382683396339416500f, 0.336889833211898800f, 
0.290284633636474610f, 0.242980137467384340f, 0.195090278983116150f, 
0.146730437874794010f, 0.098017096519470215f, 0.049067631363868713f, 
1.000000000000000000f, 0.999698817729949950f, 0.998795449733734130f, 
0.997290432453155520f, 0.995184719562530520f, 0.992479562759399410f, 
0.989176511764526370f, 0.985277652740478520f, 0.980785250663757320f, 
0.975702106952667240f, 0.970031261444091800f, 0.963776051998138430f, 
0.956940352916717530f, 0.949528157711029050f, 0.941544055938720700f, 
0.932992815971374510f, 0.923879504203796390f, 0.914209723472595210f, 
0.903989315032958980f, 0.893224298954010010f, 0.881921231746673580f, 
0.870086967945098880f, 0.857728600502014160f, 0.844853579998016360f, 
0.831469595432281490f, 0.817584812641143800f, 0.803207516670227050f, 
0.788346409797668460f, 0.773010432720184330f, 0.757208824157714840f, 
0.740951120853424070f, 0.724247097969055180f, 0.707106769084930420f, 
0.689540505409240720f, 0.671558916568756100f, 0.653172850608825680f, 
0.634393274784088130f, 0.615231573581695560f, 0.595699310302734380f, 
0.575808167457580570f, 0.555570185184478760f, 0.534997582435607910f, 
0.514102697372436520f, 0.492898166179656980f, 0.471396714448928830f, 
0.449611306190490720f, 0.427555054426193240f, 0.405241280794143680f, 
0.382683396339416500f, 0.359894990921020510f, 0.336889833211898800f, 
0.313681721687316890f, 0.290284633636474610f, 0.266712725162506100f, 
0.242980137467384340f, 0.219101205468177800f, 0.195090278983116150f, 
0.170961856842041020f, 0.146730437874794010f, 0.122410632669925690f, 
0.098017096519470215f, 0.073564521968364716f, 0.049067631363868713f, 
0.024541186168789864f
};
