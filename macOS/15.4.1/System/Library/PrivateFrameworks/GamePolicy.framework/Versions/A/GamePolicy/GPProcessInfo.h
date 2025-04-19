@class GPAutoEDRParameters;

@interface GPProcessInfo : NSObject

@property struct { unsigned int val[8]; } auditToken;
@property (getter=isIdentifiedGame) BOOL identifiedGame;
@property (retain, getter=autoEDRParameters) GPAutoEDRParameters *autoEDRParameters;

+ (id)processInfo;

- (id)init;
- (void).cxx_destruct;

@end
