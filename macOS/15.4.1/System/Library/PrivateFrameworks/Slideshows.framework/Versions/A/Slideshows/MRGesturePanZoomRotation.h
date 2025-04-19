@interface MRGesturePanZoomRotation : NSObject {
    double time;
    double x;
    double y;
    double deltaX;
    double deltaY;
    double scale;
    double rotation;
    double speedX;
    double speedY;
    double speedScale;
    double speedRotation;
    unsigned char direction;
    unsigned char countOfTouches;
    BOOL okToAnimate;
    BOOL isInFocusMode;
    BOOL isInZoomMode;
}

@end
