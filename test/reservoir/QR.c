/* Generated from ./reservoir/QR.cloog by CLooG 0.18.1-2-g43fc508 gmp bits in 0.07s. */
if (N >= 1) {
  S1(0);
  if ((M >= 1) && (N == 1)) {
    for (c4=0;c4<=M-1;c4++) {
      S2(0,c4);
    }
    S3(0);
    for (c4=0;c4<=M-1;c4++) {
      S4(0,c4);
    }
    S10(0);
    S5(0);
  }
  if ((M <= 0) && (N == 1)) {
    S3(0);
    S10(0);
    S5(0);
  }
  if ((M >= 1) && (N >= 2)) {
    for (c4=0;c4<=M-1;c4++) {
      S2(0,c4);
    }
    S3(0);
    for (c4=0;c4<=M-1;c4++) {
      S4(0,c4);
    }
    S10(0);
    S1(1);
    S5(0);
  }
  if ((M <= 0) && (N >= 2)) {
    S3(0);
    S10(0);
    S1(1);
    S5(0);
  }
  for (c2=2;c2<=min(M,N-1);c2++) {
    for (c4=c2-1;c4<=N-1;c4++) {
      S6((c2-2),c4);
      for (c6=c2-2;c6<=M-1;c6++) {
        S7((c2-2),c4,c6);
      }
      S8((c2-2),c4);
      for (c6=c2-2;c6<=M-1;c6++) {
        S9((c2-2),c4,c6);
      }
    }
    for (c4=c2-1;c4<=M-1;c4++) {
      S2((c2-1),c4);
    }
    S3((c2-1));
    for (c4=c2-1;c4<=M-1;c4++) {
      S4((c2-1),c4);
    }
    S10((c2-1));
    S1(c2);
    S5((c2-1));
  }
  if ((M >= 1) && (M <= N-2)) {
    for (c4=M;c4<=N-1;c4++) {
      S6((M-1),c4);
      S7((M-1),c4,(M-1));
      S8((M-1),c4);
      S9((M-1),c4,(M-1));
    }
    S3(M);
    S10(M);
    S1((M+1));
    S5(M);
  }
  for (c2=max(2,M+2);c2<=N-1;c2++) {
    for (c4=c2-1;c4<=N-1;c4++) {
      S6((c2-2),c4);
      S8((c2-2),c4);
    }
    S3((c2-1));
    S10((c2-1));
    S1(c2);
    S5((c2-1));
  }
  if ((M >= N) && (N >= 2)) {
    S6((N-2),(N-1));
    for (c6=N-2;c6<=M-1;c6++) {
      S7((N-2),(N-1),c6);
    }
    S8((N-2),(N-1));
    for (c6=N-2;c6<=M-1;c6++) {
      S9((N-2),(N-1),c6);
    }
    for (c4=N-1;c4<=M-1;c4++) {
      S2((N-1),c4);
    }
    S3((N-1));
    for (c4=N-1;c4<=M-1;c4++) {
      S4((N-1),c4);
    }
    S10((N-1));
    S5((N-1));
  }
  if ((M == N-1) && (M >= 1)) {
    S6((M-1),M);
    S7((M-1),M,(M-1));
    S8((M-1),M);
    S9((M-1),M,(M-1));
    S3(M);
    S10(M);
    S5(M);
  }
  if ((M <= N-2) && (N >= 2)) {
    S6((N-2),(N-1));
    S8((N-2),(N-1));
    S3((N-1));
    S10((N-1));
    S5((N-1));
  }
}
