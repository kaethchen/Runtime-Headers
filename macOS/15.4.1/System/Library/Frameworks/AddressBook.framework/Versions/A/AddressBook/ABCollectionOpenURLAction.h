@class NSDataDetector;

@interface ABCollectionOpenURLAction : ABCollectionAbstractAction

@property (retain) NSDataDetector *urlDetector;

- (void).cxx_destruct;
- (void)executeWithTarget:(id)a0;
- (void)makeURLDetectorIfNecessary;

@end
