diff --git a/scratch/testapp-sim.cc b/scratch/myTestapp-sim.cc
index 8760ab2..2d4d9a5 100644
--- a/scratch/testapp-sim.cc
+++ b/scratch/myTestapp-sim.cc
@@ -20,6 +20,14 @@ main (int argc, char *argv[])
    * second of simulation time respectively.
    * 
    * */
+
+  TestApplication app;
+
+  (*nodes.Begin())->AddApplication(Ptr<Application>(&app));
+
+  app.SetStartTime (Seconds (1.0));
+  app.SetStopTime (Seconds (2.0));
+
   Simulator::Run ();
   Simulator::Destroy ();
   return 0;
