// Equations for NE velocity Kalman gain
const float S0 = powf(P(0,1), 2);
const float S1 = P(1,1) + velObsVar;
const float S2 = P(0,0) + velObsVar;
const float S3 = 1.0F/(S0 - S1*S2);
const float S4 = -P(0,1)*S3*velObsVar;


K(0,0) = S3*(-P(0,0)*S1 + S0);
K(0,1) = S4;
K(1,1) = S3*(-P(1,1)*S2 + S0);


