@class NSString, SIRINLUEXTERNALCDMNluRequest;

@interface FSFNluRequestFeature : NSObject <FSFFeature, BMStoreData> {
    unsigned int _dataVersion;
    SIRINLUEXTERNALCDMNluRequest *_content;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)content;
- (id)json;
- (id)serialize;
- (id)interactionId;
- (id)initWithContent:(id)a0 dataVersion:(unsigned int)a1;
- (id)initWithData:(id)a0 dataVersion:(unsigned int)a1;
- (id)getSerializedData;
- (id)initWithContentJson:(id)a0 dataVersion:(unsigned int)a1;

@end
