@class NSString, NSDate;

@interface PREResponsesExperimentMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (copy, nonatomic) NSString *summaryString;
@property (nonatomic, getter=isTapBack) BOOL tapBack;
@property (nonatomic, getter=isEmote) BOOL emote;
@property (nonatomic, getter=isRead) BOOL read;
@property (retain, nonatomic) NSDate *dateSent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
