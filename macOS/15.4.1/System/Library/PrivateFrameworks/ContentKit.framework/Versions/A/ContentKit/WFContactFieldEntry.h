@class WFEmailAddress, WFContact, NSString, WFMessageGroup, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) WFContact *contact;
@property (readonly, nonatomic) WFPhoneNumber *phoneNumber;
@property (readonly, nonatomic) WFEmailAddress *emailAddress;
@property (readonly, nonatomic) NSString *customHandle;
@property (readonly, nonatomic) WFMessageGroup *messageGroup;
@property (readonly, nonatomic) id underlyingObject;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)processingValueClasses;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithContact:(id)a0;
- (id)contentItem;
- (id)initWithCustomHandle:(id)a0;
- (id)initWithHandleString:(id)a0;
- (id)initWithHandleString:(id)a0 allowsCustomHandles:(BOOL)a1;
- (id)initWithMessageGroup:(id)a0;

@end
