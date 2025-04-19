@interface TSCEFinancialFunctions : TSCEFunctionNode

+ (long long)compareMonthAndDay:(id)a0 date2:(id)a1;
+ (id)getCoupDateAfterEOMWithCoupDate:(id)a0 maturityDate:(id)a1;
+ (double)getCouponDaysBeforeSettlementDateWithSettlementDate:(id)a0 settlement:(id)a1 maturity:(id)a2 numCoupons:(double)a3 dayBasisMode:(long long)a4 outError:(id *)a5;
+ (double)getCouponDaysSinceSettlementDateWithSettlementDate:(id)a0 settlement:(id)a1 maturity:(id)a2 numCoupons:(double)a3 dayBasisMode:(long long)a4 outError:(id *)a5;
+ (double)getCouponDaysWithSettlementDate:(id)a0 settlement:(id)a1 maturity:(id)a2 numCoupons:(double)a3 dayBasisMode:(long long)a4 outError:(id *)a5;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })getDurationInPeriodsWithSettlementDate:(id)a0 settlement:(id)a1 maturity:(id)a2 couponRate:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 yield:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a4 numCoupons:(double)a5 dayBasisMode:(long long)a6 outError:(id *)a7;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })getFixedPaymentWithRate:(id)a0 rate:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 nper:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 pv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 fv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a4 dueBeginning:(BOOL)a5 outError:(id *)a6;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })getInterestPortionOfPaymentWithRate:(id)a0 rate:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 per:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 nper:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 pv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a4 fv:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a5 dueBeginning:(BOOL)a6 outError:(id *)a7;
+ (double)getNumFutureCouponsWithSettlementDate:(id)a0 settlement:(id)a1 maturity:(id)a2 numCoupons:(double)a3 dayBasisMode:(long long)a4 outError:(id *)a5;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })getYieldDiscWithSettlementDate:(id)a0 maturity:(id)a1 price:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 redemptionValue:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a3 dayBasisMode:(long long)a4 outError:(id *)a5;
+ (id)nextCoupDateWithSettlement:(id)a0 settlement:(id)a1 maturity:(id)a2 frequency:(int)a3 outError:(id *)a4;
+ (id)prevCoupDateWithSettlement:(id)a0 settlement:(id)a1 maturity:(id)a2 frequency:(int)a3 outError:(id *)a4;

@end
