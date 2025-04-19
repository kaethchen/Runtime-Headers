@class NSString, NSError;

@interface SNFileDeletionResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSError *error;

- (id)init;
- (void).cxx_destruct;

@end
