@class PKMediaSourceProperties, NSString, PKMediaSize;

@interface PKMediaCol : PKCollectionSpecialization <PKUserCodable>

@property (readonly) PKMediaSize *mediaSize;
@property (readonly) PKMediaSourceProperties *mediaSourceProperties;
@property (readonly) NSString *mediaSource;
@property (readonly) NSString *mediaType;
@property (readonly) NSString *mediaKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)getMargins:(struct pwg_size_s { int x0; int x1; int x2; int x3; int x4; int x5; } *)a0;
- (id)userCodableDictionary;

@end
