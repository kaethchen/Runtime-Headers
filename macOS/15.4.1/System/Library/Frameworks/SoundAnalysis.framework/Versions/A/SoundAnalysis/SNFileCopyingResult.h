@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSURL *itemURL;

- (id)init;
- (void).cxx_destruct;

@end
