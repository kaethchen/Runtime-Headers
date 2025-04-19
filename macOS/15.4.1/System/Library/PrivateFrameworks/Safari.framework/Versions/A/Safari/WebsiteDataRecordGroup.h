@class NSSet, NSString, NSArray, NSMutableSet;

@interface WebsiteDataRecordGroup : NSObject <WebsiteDataDescriptor> {
    NSMutableSet *_mutableRecords;
}

@property (readonly, copy, nonatomic) NSSet *records;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, copy, nonatomic) NSArray *identitiesURLs;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
