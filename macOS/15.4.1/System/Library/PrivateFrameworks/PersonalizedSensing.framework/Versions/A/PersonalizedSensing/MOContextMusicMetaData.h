@class NSString;

@interface MOContextMusicMetaData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *musicString;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *title;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMusicString:(id)a0;

@end
