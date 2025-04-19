@interface MRReflectionsLayout : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    long long slideIndex;
    BOOL flipped;
    double totalHeight;
    struct CGPoint { double x; double y; } borderOffset;
    struct CGPoint { double x; double y; } border;
    double pInYRot;
    double pInYTilt;
    double pInSpeedYRight;
    double pInSpeedYLeft;
    double pOutYRot;
    double pOutYTilt;
    double pOutYNoTilt;
    double pOutSpeedrYRight;
    double pOutSpeedrYLeft;
    double pOutTxTilt;
    double pOutTxNoTilt;
    double pOutYFactor;
    double pOutSpeedYRight;
    double pOutSpeedYLeft;
    double pOutTxFactorRight;
    double pOutTxFactorLeft;
    BOOL isBreak;
}

@end
