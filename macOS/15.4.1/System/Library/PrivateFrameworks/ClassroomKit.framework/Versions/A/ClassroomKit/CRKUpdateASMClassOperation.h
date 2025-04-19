@class NSString, CRKASMCourseUpdateProperties;
@protocol CRKClassKitRosterRequirements;

@interface CRKUpdateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID;
@property (readonly, copy, nonatomic) CRKASMCourseUpdateProperties *properties;
@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)main;
- (void)applyPropertiesToClass:(id)a0;
- (id)classWithObjectID:(id)a0 inClasses:(id)a1;
- (void)didFetchClasses:(id)a0 error:(id)a1;
- (void)fetchClasses;
- (id)initWithObjectID:(id)a0 properties:(id)a1 requirements:(id)a2;
- (id)makePropertyApplicator;
- (void)saveClass:(id)a0;

@end
