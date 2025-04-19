@class EDString, CHDTrendlineLabel, OADGraphicProperties;

@interface CHDTrendline : NSObject {
    BOOL mDisplayEquation;
    BOOL mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (id)label;
- (void)setLabel:(id)a0;
- (double)forward;
- (void)setForward:(double)a0;
- (double)backward;
- (int)polynomialOrder;
- (id)defaultNameWithSeriesName:(id)a0;
- (id)graphicProperties;
- (double)interceptYAxis;
- (BOOL)isDisplayEquation;
- (BOOL)isDisplayRSquaredValue;
- (long long)movingAveragePeriod;
- (void)setBackward:(double)a0;
- (void)setDisplayEquation:(BOOL)a0;
- (void)setDisplayRSquaredValue:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (void)setInterceptYAxis:(double)a0;
- (void)setMovingAveragePeriod:(long long)a0;
- (void)setPolynomialOrder:(int)a0;

@end
