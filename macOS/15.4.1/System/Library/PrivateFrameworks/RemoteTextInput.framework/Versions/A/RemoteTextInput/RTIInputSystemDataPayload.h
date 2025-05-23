@class RTIDocumentState, NSUUID, RTIDocumentTraits, RTITextOperations;

@interface RTIInputSystemDataPayload : RTIDataPayload <NSSecureCoding, NSCopying> {
    BOOL _disableUpdate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTITextOperations *textOperations;
@property (retain, nonatomic) NSUUID *sessionUUID;

+ (id)payloadWithData:(id)a0;
+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCoder:(id)a0;
- (void)_unarchiveData;
- (void)updateData;

@end
