@class Protocol, NSString, MKFMatterLocalKeyValuePairDatabaseID, NSPredicate, NSData, _MKFHome;
@protocol MKFHome;

@interface _MKFMatterLocalKeyValuePair : _MKFObject <MKFMatterLocalKeyValuePair, MKFMatterLocalKeyValuePairPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *value;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFMatterLocalKeyValuePairDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfMatterLocalKeyValuePair;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
