diff --git a/src/applications/model/testapp.cc b/src/applications/model/myTestapp.cc
index e2e184b..9e85452 100644
--- a/src/applications/model/testapp.cc
+++ b/src/applications/model/myTestapp.cc
@@ -32,4 +32,12 @@ TestApplication::~TestApplication ()
  * XXX: IMPLEMENT TWO METHODS HERE
  * 
  * */
+void TestApplication::StartApplication(void)
+{
+  printf("Hello World!\n");
+}
+void TestApplication::StopApplication(void)
+{
+  printf("Goodbye World!\n");
+}
 } // namespace ns3
