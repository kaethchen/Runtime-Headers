@class NSNumber;

@interface MTRAccessGrant : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *subjectID;
@property (readonly, nonatomic) unsigned char grantedPrivilege;
@property (readonly, nonatomic) unsigned char authenticationMode;

+ (id)accessGrantForNodeID:(id)a0 privilege:(unsigned char)a1;
+ (id)accessGrantForAllNodesWithPrivilege:(unsigned char)a0;
+ (id)accessGrantForCASEAuthenticatedTag:(id)a0 privilege:(unsigned char)a1;
+ (id)accessGrantForGroupID:(id)a0 privilege:(unsigned char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
