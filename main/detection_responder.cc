#include "detection_responder.h"

// This dummy implementation writes person and no person scores to the error
// console. Real applications will want to take some custom action instead, and
// should implement their own versions of this function.
void RespondToDetection(tflite::ErrorReporter *error_reporter,
                        int8_t person_score, int8_t no_person_score)
{
    TF_LITE_REPORT_ERROR(error_reporter, "person score:%d no person score %d",
                         person_score, no_person_score);
}
