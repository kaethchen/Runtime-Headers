@class NSString, NSArray, NSError;

@interface ATXMegadomeContextualPersonRelationships : NSObject

- (id)init;
- (id)megadomePersonIDFromName:(id)a0 error:(id *)a1;
- (void)entityRelationshipsFrom:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (id)megadomePersonIDFromContactID:(id)a0 error:(id *)a1;
- (id)megadomePersonIDFromPhoneNumber:(id)a0 error:(id *)a1;

@end
