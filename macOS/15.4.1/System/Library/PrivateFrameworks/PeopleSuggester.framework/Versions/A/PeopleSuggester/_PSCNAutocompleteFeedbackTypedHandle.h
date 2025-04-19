@class CNContact;

@interface _PSCNAutocompleteFeedbackTypedHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, nonatomic) BOOL viaContactPicker;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContact:(id)a0 viaContactPicker:(BOOL)a1;

@end
