@class NSString;

@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address;
@property (nonatomic) BOOL isValid;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;

@end
