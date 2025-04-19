@class NSString;

@interface DocumentUnderstanding.DUDocumentHTMLData : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ htmlString;
}

@property (nonatomic, copy) NSString *htmlString;
@property (nonatomic, retain) void /* unknown type, empty encoding */ documentEmailData;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
