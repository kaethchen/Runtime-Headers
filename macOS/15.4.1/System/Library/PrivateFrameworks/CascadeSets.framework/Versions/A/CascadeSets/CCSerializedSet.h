@class NSData, CCSerializedSetMessage;

@interface CCSerializedSet : CCSet {
    CCSerializedSetMessage *_setMessage;
}

@property (readonly, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (id)_serializeSet:(id)a0 useCase:(id)a1 error:(id *)a2;
+ (id)setEnumeratorWithSerializedSets:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)changePublisher;
- (id)changePublisherWithUseCase:(id)a0;
- (id)_deduplicateItemsOfType:(unsigned short)a0 localInstances:(id)a1 error:(id *)a2;
- (id)_placeholderLocalDevice:(id *)a0;
- (id)initWithItemType:(unsigned short)a0 descriptors:(id)a1 localInstances:(id)a2 error:(id *)a3;
- (id)initWithItemType:(unsigned short)a0 personaIdentifier:(id)a1 isInUserVault:(BOOL)a2 descriptors:(id)a3 localInstances:(id)a4 error:(id *)a5;
- (id)initWithSet:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)initWithSetMessage:(id)a0 error:(id *)a1;
- (BOOL)writeToStream:(id)a0 format:(unsigned char)a1 error:(id *)a2;

@end
