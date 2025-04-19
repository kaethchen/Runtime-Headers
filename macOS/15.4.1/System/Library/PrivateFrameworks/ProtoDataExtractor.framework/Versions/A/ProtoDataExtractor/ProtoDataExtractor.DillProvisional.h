@class NSData;

@interface ProtoDataExtractor.DillProvisional : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ eventId;
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)getVersion;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)qualifiedMessageName;

@end
