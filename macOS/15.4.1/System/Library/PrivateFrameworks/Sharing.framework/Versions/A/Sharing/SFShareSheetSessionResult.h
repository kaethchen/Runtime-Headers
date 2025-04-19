@class NSNumber;

@interface SFShareSheetSessionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *presentationMs;
@property (readonly, nonatomic) BOOL success;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPresentationMs:(id)a0 success:(BOOL)a1;

@end
