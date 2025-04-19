@class NSData, NSArray;

@interface SCRO2DBrailleData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly, nonatomic) long long focusedIndex;
@property (readonly, nonatomic) BOOL truncateStrings;
@property (readonly, nonatomic) BOOL alignAtTop;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)initWithStrings:(id)a0 focusedIndex:(long long)a1 truncateStrings:(BOOL)a2 alignAtTop:(BOOL)a3;

@end
