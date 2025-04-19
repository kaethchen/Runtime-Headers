@class NSString;

@interface BFMRequestMetadata : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *fileID;
@property (nonatomic, readonly) int line;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileID:(id)a0 line:(int)a1;

@end
