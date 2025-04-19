@class NSString;

@interface HDSettingsMigrationStep : NSObject {
    id /* block */ _block;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long migrationVersion;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 migrationVersion:(long long)a1 block:(id /* block */)a2;
- (BOOL)performStepWithProfile:(id)a0 error:(id *)a1;

@end
