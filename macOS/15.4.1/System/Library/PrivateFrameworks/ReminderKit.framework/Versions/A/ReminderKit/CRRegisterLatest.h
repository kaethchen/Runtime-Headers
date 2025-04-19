@class CRTimestamp;
@protocol CRDataType;

@interface CRRegisterLatest : CRRegister {
    id<CRDataType> _contents;
}

@property (retain, nonatomic) CRTimestamp *timestamp;

- (id)description;
- (void).cxx_destruct;
- (id)contents;
- (void)_setContents:(id)a0;
- (void)setContents:(id)a0;
- (void)setDocument:(id)a0;
- (void)mergeWith:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeIntoProtobufRegisterLatest:(void *)a0 coder:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (id)initWithContents:(id)a0 document:(id)a1;
- (id)initWithContents:(id)a0 timestamp:(id)a1 document:(id)a2;
- (id)initWithProtobufRegisterLatest:(const void *)a0 decoder:(id)a1;
- (BOOL)isEqualContents:(id)a0;
- (void)mergeWithRegisterLatest:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)walkGraph:(id /* block */)a0;

@end
