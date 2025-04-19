@class NSUUID, NSString, NSFileHandle;

@interface SHKShareSheetTransport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSFileHandle *imageFileHandle;
@property (nonatomic, getter=isSymbolImage) BOOL symbolImage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
