@class ADMSystem, NSString, NSUUID, NSData, ODRecord;

@interface ADMLocalUser : NSObject

@property (readonly, retain) ODRecord *record;
@property (readonly, copy) NSString *redactedDescription;
@property (readonly, retain) NSData *dataForClonedUser;
@property (readonly, retain) ODRecord *record;
@property (readonly, copy) NSString *redactedDescription;
@property (readonly, retain) NSData *dataForClonedUser;
@property (readonly, retain) ADMSystem *system;
@property (readonly) BOOL isAdmin;
@property (readonly) BOOL isOwner;
@property (readonly) BOOL isAllowedSecureToken;
@property (readonly) BOOL hasSecureToken;
@property (readonly, retain) NSUUID *uuid;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *fullname;
@property (readonly, retain) NSData *picture;
@property (readonly, copy) NSString *passwordHint;

+ (id)localUserWithRecord:(id)a0 onSystem:(id)a1;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)uuid;
- (BOOL)isOwner;
- (id)passwordHint;
- (id)picture;
- (BOOL)isAdmin;
- (id)fullname;
- (BOOL)hasSecureToken;
- (id)initWithRecord:(id)a0 onSystem:(id)a1;

@end
