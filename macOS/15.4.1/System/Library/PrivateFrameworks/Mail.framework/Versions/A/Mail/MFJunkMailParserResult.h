@class NSString, NSSet;

@interface MFJunkMailParserResult : NSObject {
    void /* unknown type, empty encoding */ plainText;
    void /* unknown type, empty encoding */ imageURLs;
    void /* unknown type, empty encoding */ otherURLs;
}

@property (nonatomic, readonly) NSString *plainText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ characterCount;
@property (nonatomic, readonly) NSSet *imageURLs;
@property (nonatomic, readonly) NSSet *otherURLs;

- (id)init;
- (void).cxx_destruct;

@end
