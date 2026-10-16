/* Use the old glibc versions of these so the libs still load on pre-2.43 distros. */
#if defined(__x86_64__) && !defined(__ASSEMBLER__)
#define PIN(f, v) __asm__(".symver " #f "," #f "@GLIBC_" #v);
PIN(acosf, 2.2.5) PIN(acoshf, 2.2.5) PIN(asinf, 2.2.5) PIN(atan2f, 2.2.5)
PIN(atanhf, 2.2.5) PIN(cosh, 2.2.5) PIN(coshf, 2.2.5) PIN(exp10, 2.2.5)
PIN(fmod, 2.2.5) PIN(fmodf, 2.2.5) PIN(j0f, 2.2.5) PIN(j1f, 2.2.5)
PIN(jnf, 2.2.5) PIN(lgammaf, 2.23) PIN(lgammaf_r, 2.2.5) PIN(log10f, 2.2.5)
PIN(remainder, 2.2.5) PIN(remainderf, 2.2.5) PIN(sinh, 2.2.5) PIN(sinhf, 2.2.5)
PIN(sqrtf, 2.2.5) PIN(tgammaf, 2.2.5) PIN(y0f, 2.2.5) PIN(y1f, 2.2.5)
PIN(ynf, 2.2.5) PIN(cfgetispeed, 2.2.5) PIN(cfgetospeed, 2.2.5)
PIN(cfsetispeed, 2.2.5) PIN(cfsetospeed, 2.2.5) PIN(cfsetspeed, 2.2.5)
#undef PIN
#endif
