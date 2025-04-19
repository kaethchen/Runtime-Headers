@class NSString;

@interface NewsCore.FeedItemDatabaseRef : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ bookmarkData;
    void /* unknown type, empty encoding */ fileName;
    void /* unknown type, empty encoding */ _resolved;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
