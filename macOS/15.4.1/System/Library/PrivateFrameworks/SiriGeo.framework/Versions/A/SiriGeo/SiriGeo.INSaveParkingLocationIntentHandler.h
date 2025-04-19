@class INPlacemarkResolutionResult, INSaveParkingLocationIntent;

@interface SiriGeo.INSaveParkingLocationIntentHandler : NSObject <INSaveParkingLocationIntentHandling> {
    void /* unknown type, empty encoding */ logObject;
    void /* unknown type, empty encoding */ completion;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSaveParkingLocation:(id)a0 completion:(id /* block */)a1;
- (void)resolveParkingLocationForSaveParkingLocation:(INSaveParkingLocationIntent *)a0 withCompletion:(void (^)(INPlacemarkResolutionResult *))a1;

@end
