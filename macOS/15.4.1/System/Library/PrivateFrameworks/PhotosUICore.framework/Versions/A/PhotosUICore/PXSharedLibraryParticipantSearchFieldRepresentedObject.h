@class NSString, CNContact;

@interface PXSharedLibraryParticipantSearchFieldRepresentedObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) long long kind;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0 address:(id)a1 kind:(long long)a2;

@end
