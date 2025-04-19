@class QCImagePort, QCStringPort;

@interface QCImageMetadata : QCPatch {
    QCImagePort *inputImage;
    QCStringPort *outputMetadata;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
