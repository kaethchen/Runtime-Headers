@interface SBPIDAppLocator : SBAppLocator {
    int _pid;
}

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)path;
- (id)bundleIdentifier;
- (id)initWithPID:(int)a0;

@end
