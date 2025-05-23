@class NSArray, NSString;

@interface SAActivityStream : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityStreamWithDictionary:(id)a0 context:(id)a1;
+ (id)activityStream;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
