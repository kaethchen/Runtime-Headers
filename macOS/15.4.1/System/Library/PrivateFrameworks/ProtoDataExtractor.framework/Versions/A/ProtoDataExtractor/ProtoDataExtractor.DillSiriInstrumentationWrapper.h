@class NSData;

@interface ProtoDataExtractor.DillSiriInstrumentationWrapper : SISchemaTopLevelUnionType {
    void /* unknown type, empty encoding */ dillData;
    void /* unknown type, empty encoding */ anyEventType;
}

@property (nonatomic, readonly) NSData *data;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)qualifiedMessageName;

@end
