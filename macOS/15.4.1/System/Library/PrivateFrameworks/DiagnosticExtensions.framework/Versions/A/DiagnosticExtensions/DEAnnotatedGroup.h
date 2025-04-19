@class NSString, NSDictionary, NSArray;

@interface DEAnnotatedGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *displayName;
@property (retain) NSString *localizedDescription;
@property (retain) NSString *iconType;
@property (retain) NSDictionary *additionalInfo;
@property (retain) NSArray *items;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 localizedDescription:(id)a1 iconType:(id)a2 additionalInfo:(id)a3 attachmentItems:(id)a4;

@end
