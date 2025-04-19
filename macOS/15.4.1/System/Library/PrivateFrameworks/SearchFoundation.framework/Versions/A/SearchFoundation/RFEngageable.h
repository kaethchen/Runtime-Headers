@class RFPreviewList, NSString, NSDictionary, NSData, SFCommandReference;

@interface RFEngageable : NSObject <RFEngageable, NSSecureCoding, NSCopying> {
    struct { unsigned char command_reference : 1; unsigned char preview_list : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFCommandReference *command_reference;
@property (retain, nonatomic) RFPreviewList *preview_list;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPreview_list;
- (BOOL)hasCommand_reference;

@end
