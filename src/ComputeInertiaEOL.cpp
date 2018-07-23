#include <cmath>
void ComputeInertiaEOL(
	const double *xa,
	const double *xb,
	const double *xc,
	const double *Xa,
	const double *Xb,
	const double *Xc,
	const double *g,
	double rho,
	double *W,
	double *f,
	double *M)
{
	double xax = xa[0];
	double xay = xa[1];
	double xaz = xa[2];
	double xbx = xb[0];
	double xby = xb[1];
	double xbz = xb[2];
	double xcx = xc[0];
	double xcy = xc[1];
	double xcz = xc[2];
	double Xax = Xa[0];
	double Xay = Xa[1];
	double Xbx = Xb[0];
	double Xby = Xb[1];
	double Xcx = Xc[0];
	double Xcy = Xc[1];
	double gx = g[0];
	double gy = g[1];
	double gz = g[2];
	double t7 = Xax * Xby - Xax * Xcy - Xbx * Xay + Xcx * Xay + Xbx * Xcy - Xcx * Xby;
	double t8 = rho * t7;
	double t18 = xax - xcx;
	double t21 = xay - xcy;
	double t24 = xaz - xcz;
	double t33 = gx * (xbx - xcx) / 6 + gy * (xby - xcy) / 6 + gz * (xbz - xcz) / 6 + gx * t18 / 6 + gy * t21 / 6 + gz * t24 / 6 + gx * xcx / 2 + gy * xcy / 2 + gz * xcz / 2;
	double W00 = -t8 * t33;
	double f01 = t8 * gx / 6;
	double f02 = t8 * gy / 6;
	double f03 = t8 * gz / 6;
	double f04 = rho * (Xby - Xcy) * t33;
	double f05 = rho * (-Xbx + Xcx) * t33;
	double f06 = f01;
	double f07 = f02;
	double f08 = f03;
	double t42 = Xcy - Xay;
	double f09 = rho * t42 * t33;
	double t44 = -Xcx + Xax;
	double f10 = rho * t44 * t33;
	double f11 = f06;
	double f12 = f07;
	double f13 = f08;
	double t46 = -Xby + Xay;
	double f14 = rho * t46 * t33;
	double t48 = Xbx - Xax;
	double f15 = rho * t48 * t33;
	double M0101 = t8 / 12;
	double M0102 = 0;
	double M0103 = 0;
	double t51 = 0.1e1 / t7;
	double t52 = (xbx - xax) * t51;
	double t55 = -t18 * t51;
	double t57 = -t52 * t42 - t55 * t46;
	double M0104 = t8 * t57 / 12;
	double t62 = -t52 * t44 - t55 * t48;
	double M0105 = t8 * t62 / 12;
	double M0106 = t8 / 24;
	double M0107 = 0;
	double M0108 = 0;
	double M0109 = t8 * t57 / 24;
	double M0110 = t8 * t62 / 24;
	double M0111 = M0106;
	double M0112 = 0;
	double M0113 = 0;
	double M0114 = M0109;
	double M0115 = M0110;
	double M0201 = 0;
	double M0202 = M0101;
	double M0203 = 0;
	double t70 = (xby - xay) * t51;
	double t73 = -t21 * t51;
	double t75 = -t70 * t42 - t73 * t46;
	double M0204 = t8 * t75 / 12;
	double t80 = -t70 * t44 - t73 * t48;
	double M0205 = t8 * t80 / 12;
	double M0206 = 0;
	double M0207 = M0111;
	double M0208 = 0;
	double M0209 = t8 * t75 / 24;
	double M0210 = t8 * t80 / 24;
	double M0211 = 0;
	double M0212 = M0207;
	double M0213 = 0;
	double M0214 = M0209;
	double M0215 = M0210;
	double M0301 = 0;
	double M0302 = 0;
	double M0303 = M0202;
	double t88 = (xbz - xaz) * t51;
	double t91 = -t24 * t51;
	double t93 = -t88 * t42 - t91 * t46;
	double M0304 = t8 * t93 / 12;
	double t98 = -t88 * t44 - t91 * t48;
	double M0305 = t8 * t98 / 12;
	double M0306 = 0;
	double M0307 = 0;
	double M0308 = M0212;
	double M0309 = t8 * t93 / 24;
	double M0310 = t8 * t98 / 24;
	double M0311 = 0;
	double M0312 = 0;
	double M0313 = M0308;
	double M0314 = M0309;
	double M0315 = M0310;
	double M0401 = M0104;
	double M0402 = M0204;
	double M0403 = M0304;
	double t105 = t57 * t57;
	double t106 = t75 * t75;
	double t107 = t93 * t93;
	double M0404 = t8 * (t105 / 12 + t106 / 12 + t107 / 12);
	double t110 = t62 * t57;
	double t111 = t80 * t75;
	double t112 = t98 * t93;
	double t113 = t110 + t111 + t112;
	double M0405 = t8 * t113 / 12;
	double M0406 = M0114;
	double M0407 = M0214;
	double M0408 = M0314;
	double M0409 = M0404 / 2;
	double M0410 = t8 * t113 / 24;
	double M0411 = M0406;
	double M0412 = M0407;
	double M0413 = M0408;
	double t118 = -t57;
	double t119 = t57 * t118;
	double t121 = -t75;
	double t122 = t75 * t121;
	double t124 = -t93;
	double t125 = t93 * t124;
	double M0414 = t8 * (t119 / 4 + t122 / 4 + t125 / 4 + t105 / 3 + t106 / 3 + t107 / 3) / 2;
	double t132 = -t62;
	double t133 = t57 * t132;
	double t135 = -t80;
	double t136 = t75 * t135;
	double t138 = -t98;
	double t139 = t93 * t138;
	double t141 = t110 / 3;
	double t142 = t111 / 3;
	double t143 = t112 / 3;
	double M0415 = t8 * (t133 / 4 + t136 / 4 + t139 / 4 + t141 + t142 + t143) / 2;
	double M0501 = M0105;
	double M0502 = M0205;
	double M0503 = M0305;
	double M0504 = M0405;
	double t146 = t62 * t62;
	double t147 = t80 * t80;
	double t148 = t98 * t98;
	double M0505 = t8 * (t146 / 12 + t147 / 12 + t148 / 12);
	double M0506 = M0115;
	double M0507 = M0215;
	double M0508 = M0315;
	double M0509 = M0410;
	double M0510 = M0505 / 2;
	double M0511 = M0506;
	double M0512 = M0507;
	double M0513 = M0508;
	double t151 = t62 * t118;
	double t153 = t80 * t121;
	double t155 = t98 * t124;
	double M0514 = t8 * (t151 / 4 + t153 / 4 + t155 / 4 + t141 + t142 + t143) / 2;
	double t159 = t62 * t132;
	double t161 = t80 * t135;
	double t163 = t98 * t138;
	double M0515 = t8 * (t159 / 4 + t161 / 4 + t163 / 4 + t146 / 3 + t147 / 3 + t148 / 3) / 2;
	double M0601 = M0313;
	double M0602 = 0;
	double M0603 = 0;
	double M0604 = M0411;
	double M0605 = M0511;
	double M0606 = M0303;
	double M0607 = 0;
	double M0608 = 0;
	double M0609 = M0401;
	double M0610 = M0501;
	double M0611 = M0601;
	double M0612 = 0;
	double M0613 = 0;
	double M0614 = M0604;
	double M0615 = M0605;
	double M0701 = 0;
	double M0702 = M0611;
	double M0703 = 0;
	double M0704 = M0412;
	double M0705 = M0512;
	double M0706 = 0;
	double M0707 = M0606;
	double M0708 = 0;
	double M0709 = M0402;
	double M0710 = M0502;
	double M0711 = 0;
	double M0712 = M0702;
	double M0713 = 0;
	double M0714 = M0704;
	double M0715 = M0705;
	double M0801 = 0;
	double M0802 = 0;
	double M0803 = M0712;
	double M0804 = M0413;
	double M0805 = M0513;
	double M0806 = 0;
	double M0807 = 0;
	double M0808 = M0707;
	double M0809 = M0403;
	double M0810 = M0503;
	double M0811 = 0;
	double M0812 = 0;
	double M0813 = M0803;
	double M0814 = M0804;
	double M0815 = M0805;
	double M0901 = M0614;
	double M0902 = M0714;
	double M0903 = M0814;
	double M0904 = M0409;
	double M0905 = M0509;
	double M0906 = M0609;
	double M0907 = M0709;
	double M0908 = M0809;
	double M0909 = M0404;
	double M0910 = M0504;
	double M0911 = M0901;
	double M0912 = M0902;
	double M0913 = M0903;
	double M0914 = M0414;
	double M0915 = M0415;
	double M1001 = M0615;
	double M1002 = M0715;
	double M1003 = M0815;
	double M1004 = M0905;
	double M1005 = M0510;
	double M1006 = M0610;
	double M1007 = M0710;
	double M1008 = M0810;
	double M1009 = M0910;
	double M1010 = M0505;
	double M1011 = M1001;
	double M1012 = M1002;
	double M1013 = M1003;
	double M1014 = M0514;
	double M1015 = M0515;
	double M1101 = M0813;
	double M1102 = 0;
	double M1103 = 0;
	double M1104 = M0911;
	double M1105 = M1011;
	double M1106 = M1101;
	double M1107 = 0;
	double M1108 = 0;
	double M1109 = M1104;
	double M1110 = M1105;
	double M1111 = M0808;
	double M1112 = 0;
	double M1113 = 0;
	double M1114 = M0906;
	double M1115 = M1006;
	double M1201 = 0;
	double M1202 = M1106;
	double M1203 = 0;
	double M1204 = M0912;
	double M1205 = M1012;
	double M1206 = 0;
	double M1207 = M1202;
	double M1208 = 0;
	double M1209 = M1204;
	double M1210 = M1205;
	double M1211 = 0;
	double M1212 = M1111;
	double M1213 = 0;
	double M1214 = M0907;
	double M1215 = M1007;
	double M1301 = 0;
	double M1302 = 0;
	double M1303 = M1207;
	double M1304 = M0913;
	double M1305 = M1013;
	double M1306 = 0;
	double M1307 = 0;
	double M1308 = M1303;
	double M1309 = M1304;
	double M1310 = M1305;
	double M1311 = 0;
	double M1312 = 0;
	double M1313 = M1212;
	double M1314 = M0908;
	double M1315 = M1008;
	double M1401 = M1109;
	double M1402 = M1209;
	double M1403 = M1309;
	double M1404 = M0914;
	double M1405 = M1014;
	double M1406 = M1401;
	double M1407 = M1402;
	double M1408 = M1403;
	double M1409 = M1404;
	double M1410 = M1405;
	double M1411 = M1114;
	double M1412 = M1214;
	double M1413 = M1314;
	double t171 = t118 * t118;
	double t174 = t121 * t121;
	double t177 = t124 * t124;
	double M1414 = t8 * (0.2e1 / 0.3e1 * t119 + t171 / 4 + 0.2e1 / 0.3e1 * t122 + t174 / 4 + 0.2e1 / 0.3e1 * t125 + t177 / 4 + t105 / 2 + t106 / 2 + t107 / 2);
	double t195 = t112 + 0.2e1 / 0.3e1 * t139 + 0.2e1 / 0.3e1 * t151 + 0.2e1 / 0.3e1 * t133 + t132 * t118 / 2 + 0.2e1 / 0.3e1 * t153 + 0.2e1 / 0.3e1 * t136 + t135 * t121 / 2 + 0.2e1 / 0.3e1 * t155 + t138 * t124 / 2 + t110 + t111;
	double M1415 = t8 * t195 / 2;
	double M1501 = M1110;
	double M1502 = M1210;
	double M1503 = M1310;
	double M1504 = M0915;
	double M1505 = M1015;
	double M1506 = M1501;
	double M1507 = M1502;
	double M1508 = M1503;
	double M1509 = M1504;
	double M1510 = M1505;
	double M1511 = M1115;
	double M1512 = M1215;
	double M1513 = M1315;
	double M1514 = M1415;
	double t198 = t132 * t132;
	double t201 = t135 * t135;
	double t204 = t138 * t138;
	double M1515 = t8 * (0.2e1 / 0.3e1 * t159 + t198 / 4 + 0.2e1 / 0.3e1 * t161 + t201 / 4 + 0.2e1 / 0.3e1 * t163 + t204 / 4 + t146 / 2 + t147 / 2 + t148 / 2);
	W[0] = W00;
	f[0] = f01; f[1] = f02; f[2] = f03; f[3] = f04; f[4] = f05; f[5] = f06; f[6] = f07; f[7] = f08; f[8] = f09; f[9] = f10; f[10] = f11; f[11] = f12; f[12] = f13; f[13] = f14; f[14] = f15;
	M[0 * 15 + 0] = M0101; M[0 * 15 + 1] = M0102; M[0 * 15 + 2] = M0103; M[0 * 15 + 3] = M0104; M[0 * 15 + 4] = M0105; M[0 * 15 + 5] = M0106; M[0 * 15 + 6] = M0107; M[0 * 15 + 7] = M0108; M[0 * 15 + 8] = M0109; M[0 * 15 + 9] = M0110; M[0 * 15 + 10] = M0111; M[0 * 15 + 11] = M0112; M[0 * 15 + 12] = M0113; M[0 * 15 + 13] = M0114; M[0 * 15 + 14] = M0115;
	M[1 * 15 + 0] = M0201; M[1 * 15 + 1] = M0202; M[1 * 15 + 2] = M0203; M[1 * 15 + 3] = M0204; M[1 * 15 + 4] = M0205; M[1 * 15 + 5] = M0206; M[1 * 15 + 6] = M0207; M[1 * 15 + 7] = M0208; M[1 * 15 + 8] = M0209; M[1 * 15 + 9] = M0210; M[1 * 15 + 10] = M0211; M[1 * 15 + 11] = M0212; M[1 * 15 + 12] = M0213; M[1 * 15 + 13] = M0214; M[1 * 15 + 14] = M0215;
	M[2 * 15 + 0] = M0301; M[2 * 15 + 1] = M0302; M[2 * 15 + 2] = M0303; M[2 * 15 + 3] = M0304; M[2 * 15 + 4] = M0305; M[2 * 15 + 5] = M0306; M[2 * 15 + 6] = M0307; M[2 * 15 + 7] = M0308; M[2 * 15 + 8] = M0309; M[2 * 15 + 9] = M0310; M[2 * 15 + 10] = M0311; M[2 * 15 + 11] = M0312; M[2 * 15 + 12] = M0313; M[2 * 15 + 13] = M0314; M[2 * 15 + 14] = M0315;
	M[3 * 15 + 0] = M0401; M[3 * 15 + 1] = M0402; M[3 * 15 + 2] = M0403; M[3 * 15 + 3] = M0404; M[3 * 15 + 4] = M0405; M[3 * 15 + 5] = M0406; M[3 * 15 + 6] = M0407; M[3 * 15 + 7] = M0408; M[3 * 15 + 8] = M0409; M[3 * 15 + 9] = M0410; M[3 * 15 + 10] = M0411; M[3 * 15 + 11] = M0412; M[3 * 15 + 12] = M0413; M[3 * 15 + 13] = M0414; M[3 * 15 + 14] = M0415;
	M[4 * 15 + 0] = M0501; M[4 * 15 + 1] = M0502; M[4 * 15 + 2] = M0503; M[4 * 15 + 3] = M0504; M[4 * 15 + 4] = M0505; M[4 * 15 + 5] = M0506; M[4 * 15 + 6] = M0507; M[4 * 15 + 7] = M0508; M[4 * 15 + 8] = M0509; M[4 * 15 + 9] = M0510; M[4 * 15 + 10] = M0511; M[4 * 15 + 11] = M0512; M[4 * 15 + 12] = M0513; M[4 * 15 + 13] = M0514; M[4 * 15 + 14] = M0515;
	M[5 * 15 + 0] = M0601; M[5 * 15 + 1] = M0602; M[5 * 15 + 2] = M0603; M[5 * 15 + 3] = M0604; M[5 * 15 + 4] = M0605; M[5 * 15 + 5] = M0606; M[5 * 15 + 6] = M0607; M[5 * 15 + 7] = M0608; M[5 * 15 + 8] = M0609; M[5 * 15 + 9] = M0610; M[5 * 15 + 10] = M0611; M[5 * 15 + 11] = M0612; M[5 * 15 + 12] = M0613; M[5 * 15 + 13] = M0614; M[5 * 15 + 14] = M0615;
	M[6 * 15 + 0] = M0701; M[6 * 15 + 1] = M0702; M[6 * 15 + 2] = M0703; M[6 * 15 + 3] = M0704; M[6 * 15 + 4] = M0705; M[6 * 15 + 5] = M0706; M[6 * 15 + 6] = M0707; M[6 * 15 + 7] = M0708; M[6 * 15 + 8] = M0709; M[6 * 15 + 9] = M0710; M[6 * 15 + 10] = M0711; M[6 * 15 + 11] = M0712; M[6 * 15 + 12] = M0713; M[6 * 15 + 13] = M0714; M[6 * 15 + 14] = M0715;
	M[7 * 15 + 0] = M0801; M[7 * 15 + 1] = M0802; M[7 * 15 + 2] = M0803; M[7 * 15 + 3] = M0804; M[7 * 15 + 4] = M0805; M[7 * 15 + 5] = M0806; M[7 * 15 + 6] = M0807; M[7 * 15 + 7] = M0808; M[7 * 15 + 8] = M0809; M[7 * 15 + 9] = M0810; M[7 * 15 + 10] = M0811; M[7 * 15 + 11] = M0812; M[7 * 15 + 12] = M0813; M[7 * 15 + 13] = M0814; M[7 * 15 + 14] = M0815;
	M[8 * 15 + 0] = M0901; M[8 * 15 + 1] = M0902; M[8 * 15 + 2] = M0903; M[8 * 15 + 3] = M0904; M[8 * 15 + 4] = M0905; M[8 * 15 + 5] = M0906; M[8 * 15 + 6] = M0907; M[8 * 15 + 7] = M0908; M[8 * 15 + 8] = M0909; M[8 * 15 + 9] = M0910; M[8 * 15 + 10] = M0911; M[8 * 15 + 11] = M0912; M[8 * 15 + 12] = M0913; M[8 * 15 + 13] = M0914; M[8 * 15 + 14] = M0915;
	M[9 * 15 + 0] = M1001; M[9 * 15 + 1] = M1002; M[9 * 15 + 2] = M1003; M[9 * 15 + 3] = M1004; M[9 * 15 + 4] = M1005; M[9 * 15 + 5] = M1006; M[9 * 15 + 6] = M1007; M[9 * 15 + 7] = M1008; M[9 * 15 + 8] = M1009; M[9 * 15 + 9] = M1010; M[9 * 15 + 10] = M1011; M[9 * 15 + 11] = M1012; M[9 * 15 + 12] = M1013; M[9 * 15 + 13] = M1014; M[9 * 15 + 14] = M1015;
	M[10 * 15 + 0] = M1101; M[10 * 15 + 1] = M1102; M[10 * 15 + 2] = M1103; M[10 * 15 + 3] = M1104; M[10 * 15 + 4] = M1105; M[10 * 15 + 5] = M1106; M[10 * 15 + 6] = M1107; M[10 * 15 + 7] = M1108; M[10 * 15 + 8] = M1109; M[10 * 15 + 9] = M1110; M[10 * 15 + 10] = M1111; M[10 * 15 + 11] = M1112; M[10 * 15 + 12] = M1113; M[10 * 15 + 13] = M1114; M[10 * 15 + 14] = M1115;
	M[11 * 15 + 0] = M1201; M[11 * 15 + 1] = M1202; M[11 * 15 + 2] = M1203; M[11 * 15 + 3] = M1204; M[11 * 15 + 4] = M1205; M[11 * 15 + 5] = M1206; M[11 * 15 + 6] = M1207; M[11 * 15 + 7] = M1208; M[11 * 15 + 8] = M1209; M[11 * 15 + 9] = M1210; M[11 * 15 + 10] = M1211; M[11 * 15 + 11] = M1212; M[11 * 15 + 12] = M1213; M[11 * 15 + 13] = M1214; M[11 * 15 + 14] = M1215;
	M[12 * 15 + 0] = M1301; M[12 * 15 + 1] = M1302; M[12 * 15 + 2] = M1303; M[12 * 15 + 3] = M1304; M[12 * 15 + 4] = M1305; M[12 * 15 + 5] = M1306; M[12 * 15 + 6] = M1307; M[12 * 15 + 7] = M1308; M[12 * 15 + 8] = M1309; M[12 * 15 + 9] = M1310; M[12 * 15 + 10] = M1311; M[12 * 15 + 11] = M1312; M[12 * 15 + 12] = M1313; M[12 * 15 + 13] = M1314; M[12 * 15 + 14] = M1315;
	M[13 * 15 + 0] = M1401; M[13 * 15 + 1] = M1402; M[13 * 15 + 2] = M1403; M[13 * 15 + 3] = M1404; M[13 * 15 + 4] = M1405; M[13 * 15 + 5] = M1406; M[13 * 15 + 6] = M1407; M[13 * 15 + 7] = M1408; M[13 * 15 + 8] = M1409; M[13 * 15 + 9] = M1410; M[13 * 15 + 10] = M1411; M[13 * 15 + 11] = M1412; M[13 * 15 + 12] = M1413; M[13 * 15 + 13] = M1414; M[13 * 15 + 14] = M1415;
	M[14 * 15 + 0] = M1501; M[14 * 15 + 1] = M1502; M[14 * 15 + 2] = M1503; M[14 * 15 + 3] = M1504; M[14 * 15 + 4] = M1505; M[14 * 15 + 5] = M1506; M[14 * 15 + 6] = M1507; M[14 * 15 + 7] = M1508; M[14 * 15 + 8] = M1509; M[14 * 15 + 9] = M1510; M[14 * 15 + 10] = M1511; M[14 * 15 + 11] = M1512; M[14 * 15 + 12] = M1513; M[14 * 15 + 13] = M1514; M[14 * 15 + 14] = M1515;
}