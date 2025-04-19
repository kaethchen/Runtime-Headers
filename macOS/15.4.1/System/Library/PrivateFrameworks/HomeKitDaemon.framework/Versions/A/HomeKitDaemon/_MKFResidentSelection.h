@class NSUUID, NSDate, NSArray, NSPredicate, NSString, Protocol, _MKFHome, NSNumber, MKFResidentSelectionDatabaseID;
@protocol MKFHome;

@interface _MKFResidentSelection : _MKFModel <MKFResidentSelection, MKFResidentSelectionPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSArray *preferredResidentIDSIdentifiers;
@property (copy, nonatomic) NSDate *selectionTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSArray *preferredResidentIDSIdentifiers;
@property (copy, nonatomic) NSDate *selectionTimestamp;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFResidentSelectionDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfResidentSelection;

@end
